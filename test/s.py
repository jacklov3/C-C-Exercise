p=int(input())
di=int(input())
ya=int(input())

def panqu(x):
    y=0
    if(0<=x<=(p/3)):
        y=di*x
    elif((p/3)<=x<=((2*p)/3)):
        y=x*x
    elif(((2*p)/3)<=x<=p):
        y=ya*x
    return y

a=b=0
count=0
x1=y1=1
for i in range(2):
    while True:
        if(0<=x1<(p//3)):
            a = a+1
        elif((p//3)<=x1<((2*p)//3)):
            a=a*2
            b=b*2
        elif(((2*p)//3)<=x1<p):
            b=b+1
        x1=panqu(x1)%p
        y1=panqu(panqu(y1)%p)%p
        count=count+1
        if x1==y1:
            break
    print("x's value=",count)
    if(i==0):
        e1=a%(p-1)
        e2=b%(p-1)
    else:
        e3=a%(p-1)
        e4=b%(p-1)
    print("b's e is ",a%(p-1))
    print("y's e is ",b%(p-1))



def     gcd(a,b):
        while a!=0:
            a,b = b%a,a
        return b
#定义一个函数，参数分别为a,n，返回值为b
def     findModReverse(a,m):#这个扩展欧几里得算法求模逆

        if gcd(a,m)!=1:
            return None
        u1,u2,u3 = 1,0,a
        v1,v2,v3 = 0,1,m
        while v3!=0:
            q = u3//v3
            v1,v2,v3,u1,u2,u3 = (u1-q*v1),(u2-q*v2),(u3-q*v3),v1,v2,v3
        return u1%m

u=(e1-e3)
v=(e2-e4)
v=(p-1)-v
d=gcd(a,b)
print(u,v,d)
r=v//d
w=u//d
mo=(p-1)//d
niyuan = findModReverse(r,mo)
z=(niyuan*w)%mo
print(mo,niyuan,z)
k=0
while(k!=d):
    pu=z+k*mo
    if(pow(di,pu)%p==ya):
        print("x的值是",pu)
        break
    k=k+1
