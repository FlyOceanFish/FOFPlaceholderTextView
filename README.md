# FOFPlaceholderTextView

iOS中`UITextField`是一个具有`placeholder`的输入框，`UITextView`虽然具有多行输入的功能，但是没有`placeholder`的功能。

所以通过继承`UITextView`实现了该功能。除了该功能之外，另外增加了几种比较常用的功能。

* 设置可最大输入文字的个数
* 可以实时显示输入字数的个数(要配合最大输入个人使用)
* 是否限制表情符号的输入
* 固定输入框内n个文字不可编辑(输入框内的初始文字个数必须不小于n)

注：<font color='red'>以上功能均支持xib设置</font>

![image.png](http://upload-images.jianshu.io/upload_images/6644906-b6cd9b3d1e2d60b2.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

>可以在.m文件中增加`IB_DESIGNABLE`，可以达到实时预览的功能，由于加了这个功能，会导致Xcode有红色错误，但是不会影响运行，作者先注释掉了，如果需要可以自行打开注释

---

|属性|默认值|描述|
|---|----|----|
|showCountLabel|NO|是否显示计数|
|maxWord|0|最大输入文字个数|
|solidWord|0|需要固定住文字个数|
|restrictEmotion|NO|是否限制表情符号输入|

