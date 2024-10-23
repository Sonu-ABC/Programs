function getSum(n){
    sum=0;
    for(i=1;i<=n;i++){
       sum+=i;
    }
    return sum; 
}
num=prompt("Enter the number");
res=getSum(num);
console.log(res);