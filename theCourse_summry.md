# 2019年国际双创实践周学习总结报告

## 开源硬件实战课程总结
>2019/7/6 by_蒋逸

##### 学习开源硬件的原因
    1.开源硬件是入门硬件学习的最佳方式。
    2.学习开源硬件能提高自己的动手实践能力。
    3.能将大学课程里的电路，数电，模电知识在实际应用中加深自己的理解。

### 第一天 入门介绍


##### 一、介绍了如何学习开源硬件的方法
    1.多练习
    2.多问Google，多问CSDN，看别人的学习经验
    3.多看英文原版网站

##### 二、以Arduino为例，介绍开源硬件的生态
    1.推荐了Linux操作系统应用和Ubuntu可视化界面
    >
    这里我回去操作了安装VisualBox,并在西电开源社区找到了Ubuntu的资源，CSDN给了我莫大的帮助。
    2.强调开源硬件设计注重理论与实践相结合，并初步介绍了Github开源社区。注册Github并创建了自己的第一个仓库

### 第二天 软件操作
##### 一、介绍Arduino编程基本语言——c与c++，并初步介绍了串口
    c和c++是底层语言，介绍串口用以控制硬件输出。
##### 二、讲解Arduino基本控制语句以及库函数的引入
###### 函数介绍与总结
    Serial.begin()
    描述：开启串口，通常置于setup()函数中。
    原型：
    Serial.begin(speed)//一般取9600,115200
    Serial.begin(speed, config)
    
    Serial.print()
    描述：串口输出数据，写入字符数据到串口。
    原型：
    Serial.print(val)
    Serial.print(val, format)
    
    erial.println()
    描述：串口输出数据并换行。
    原型：
    Serial.println(val)
    Serial.println(val, format)
    
    Serial.available()
    描述：判断串口缓冲区的状态，返回从串口缓冲区读取的字节数。
    原型：Serial.available()
    参数：无。
    返回值：可读取的字节数。
    
    Serial.read()
    描述：读取串口数据，一次读一个字符，读完后删除已读数据。
    原型：Serial.read()
    参数：无。
    返回值：返回串口缓存中第一个可读字节，当没有可读数据时返回-1，整数类型。


##### 三、介绍了morse代码的概念和实现输入字母并将其转化为morse码的方法。
    1.小车代码和电路图；
    ![小车电路图alt](https://github.com/ybiu/Arduino_Learning/blob/master/7.4_Car/%E6%8E%92%E7%BA%BF%E5%8F%8A%E4%BB%A3%E7%A0%81%E6%88%AA%E5%9B%BE.png)
    2.数码管代码和电路图	
    ![数码管电路图alt](https://github.com/ybiu/Arduino_Learning/blob/master/7.6_%E6%95%B0%E7%A0%81%E7%AE%A1/%E6%95%B0%E7%A0%81%E7%AE%A1%E7%94%B5%E8%B7%AF%E5%9B%BE.png)
    
    
### 第三天 认识电子线路及操作



### arduino
