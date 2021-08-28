1. I2C_HARDWARE_OLED文件 
   - 硬件i2c实现oled显示
   - 对应库文件oled.c oled.h

2. I2C_SOFTWARE_OLED文件

   - 软件i2c实现oled显示

   - 对应库文件oled.c oled.h bmp.h oledfont.h

   - 待解决：库文件变为两个

     ​               软件i2c内容剥离

3. I2C_TEST文件
   - 用于测试上位机功能
   - 对应库文件iic.c iic.h
   - 待解决：测试

4. BLANK2文件

   - 失败的移植工程，暂未找到原因

   - 待解决：找原因

     ​                学习条件编译方法

5. APP_PROJECT
   - 4文件的原移植文件