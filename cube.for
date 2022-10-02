 program z
      read(*,*) i
      g=f('+- ',i/2+1,i,0)
      do k=1,i/2
         g=f('/ |',i/2-k+1,i,k-1)
      end do
      g=f('+-|',0,i,i/2)
      do k=1,i/2-1
         g=f('| |',0,i,i/2)
      end do
      g=f('| +',0,i,i/2)
      do k=1,i/2
         g=f('| /',0,i,i/2-k)
      end do
      g=f('+- ',0,i,0)
      stop
      end
      real function f(c,l,m,n)
      character c(3)
      write(*,*)(' ',j=1,l),c(1),(c(2),j=1,2*m),c(1),(' ',j=1,n),c(3)
      return
      end
