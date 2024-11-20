#開新的 +程式碼python
#week11-1.py 主題 Hash Map Hash Set (在「資料結構與演算法」教過的Hash雜湊)
table={}
table[9977341]=9
table[4433997]=4

print(table[9977341])#會印出9
print(table[4433997])#會印出4
#print(table[0])#如果沒有這個Key，就會爆炸
if 0 not in table:#如果沒有在裡面
  print("table[0]不存在")