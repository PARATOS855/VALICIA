cd VALICIA

chmod +x *

./install.sh

nohup ./RUN.sh > venom.log 2>&1 & //run

ps aux | grep python3 //off


pkill -9 -f VALICIA.py

kill -9 

Z39Naa7EFb97