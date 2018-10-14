
import numpy as np
from scipy.optimize import leastsq

x = np.array([1362, 9216, 82360, 185462])
y = np.array([0.028, 0.299, 19.13, 89.969])

def fun(p, x):
    """
    定义想要拟合的函数
    """
    k, b = p  #从参数p获得拟合的参数
    return k*x+b

def err(p, x, y):
    """
    定义误差函数
    """
    return fun(p,x) -y

#定义起始的参数 即从 y = 1*x+1 开始，其实这个值可以随便设，只不过会影响到找到最优解的时间
p0 = [1,1]   

#将list类型转换为 numpy.ndarray 类型，最初我直接使用
#list 类型,结果 leastsq函数报错，后来在别的blog上看到了，原来要将类型转
#换为numpy的类型

x1 = np.array(x)  
y1 = np.array(y)

xishu = leastsq(err, p0, args=(x1,y1))

print(xishu[0])
