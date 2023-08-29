#### 【shell文件】
此shell文件夹存放一些好玩的脚本

- remind.sh 主要是定时提醒，不需要在IDE里面装任何东西，使用linux系统自带的通知任务就可以，顺便了解zenity的用法：
```
nohup sh /home/remind.sh > /dev/null 2>&1 &
使用此执行命令可以一直执行，并将日志输出到null里面去丢弃日志

```
**更多zenity用法请使用zenity --help 命令查看**

