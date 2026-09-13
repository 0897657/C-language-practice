#用python设计第一个游戏
import random

counts = 3
answer = random.randint(1, 10)

while counts > 0:
    temp=input("不妨猜一下小霸王现在心里想的是那个数字:")
    guess=int(temp)

    if guess==answer:
        print("你是小霸王肚子里的坏虫吗？！")
        print("哼，猜中了也没奖励！")
        break
    else:
        if guess < answer:
            print ("too low")
        else:
            print ("too high")
    counts = counts - 1

print("游戏结束，不玩啦^_^")
