import glob
import os
import requests
import re
import json
username = os.getenv('username')
list_of_files = glob.glob(r'C:\users\{}\AppData\Local\Roblox\logs\*'.format(username))
latest_file = max(list_of_files, key=os.path.getctime)
roblox_log = open(latest_file, 'r')
for game in roblox_log:
    if 'joinGamePostStandard' in game:
        game = game.replace('joinGamePostStandard', '')
        gameid = game[130:]
list_of_files = glob.glob(r'C:\users\{}\AppData\Local\Roblox\logs\*'.format(username))
latest_file = max(list_of_files, key=os.path.getctime)
roblox_log = open(latest_file, 'r')
for line in roblox_log:
    if 'Connection accepted from' in line:
        line = line.replace('Connection accepted from', '')
        line3 = line.replace("\n", "")
        line2 = line3.replace('|', ':')
        ip = line2[58:]
y = json.loads(gameid)
placeId= y["placeId"]
url = "https://www.roblox.com/item-thumbnails?params=[{assetId:"+str(placeId)+"}]"
resp = requests.get(url)
datab = resp.text
new1 = datab.replace("[", "" )
new2 = new1.replace("]", "" )
x = json.loads(new2)
game= x["name"]
jsonwriting = '{"IP":"'+str(ip)+'","Place":"'+game+'"}'
f = open("python/data.json", "w")
f.write(jsonwriting)
f.close()
