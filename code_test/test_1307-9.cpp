//过来发现github好久没除草了
//事实上是，上周师兄师姐答辩，跟着计划了一下自己的论文安排
//然后感冒了挺长时间，一直头晕，枇杷露和感冒药赶紧上，就怕严重了喉咙溃脓发烧
//昨天刚有明显好转结果被拉去吃散伙饭，喝了点酒，洗了个澡
//今天又是一天晕晕乎乎，虚的一阵一阵的出汗
//一直有在看书，这是比较欣慰的事
//不要停止学习

//=========================================================================================================
//快速排序
/*
void Quick_Sort(int *a,int low,int high)
{
int pos;

  if(low < high)
  {
  //设置随机数
  //在随机数的前提下排序
  //左区间递归排序
  Quick_Sort(a,low,pos-1);
  //右区间递归排序	
  Quick_Sort(a,pos+1,high);	
  }
}
*/
//冒泡排序
/*
void Bubble_Sort(int *arr,int len)
{
	int i,j,exchange;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++)
			if(arr[j] > arr[j+1])
			{
				exchange = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = exchange;
			}
}
*/
//shell排序
/*

*/
