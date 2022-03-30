# embedded_lib_pub
This is a utility tool kits for embedded system. You may get some inspiration in these codes. Or these code will run in your own devices.

## Introduction

This tool kits will support a lot of open source tools for you, and help you to deploy them in your own device.

### Product Menu

| Product Name  | Description                                                  |
| ------------- | ------------------------------------------------------------ |
| Control suite | This file will support a lot of tools to help you complete a digital discrete control system design. |




## 1 control suite

This product contains the following modules.

| Module Name | Description |
| ----------- | ---------- |
| discrete_control_system | This is the basic module of the whole control suite. This object will save a lot of basic settings of the discrete control system. You may construct a discrete_control_system before other module initialized. Then all the other module will contain a object named `dcs`, which is a discrete_control_system object. |
| z_function | This module will provide you a tool that will help you implement a discrete transfer function easily. After you design a discrete transfer function, the only thing you need to do is simplify the equation to the normalized form. And transmit these parameter to the object, and call the calculate routine. |

### 1.1 discrete_control_system



###  1.2 z_function

If you have designed a special z-domain transfer function, you may get a equation which owning the following form,
$$
 \begin{aligned}
		H(z) &= \frac{R(z)}{X(z)}=\frac{a_0+\Sigma_{p=1}^{m}{a_pz^{-p}}}{1+\Sigma_{q=1}^n{b_qz^{-q}}} \\
		r_n &= a_0x_n+\Sigma_{p=1}^{m}{a_px_{n-p}}-\Sigma_{q=1}^n{b_qr_{n-q}}
	  \end{aligned}
$$
All the parameter of the numerator and denominator will be sent to construct the equation.

More information you may get it in `z_transfer_function.h`.
