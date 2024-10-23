function cstr(arr){
    let len=arr.length;
    news="";
    for(let i=0;i<len;i++){
        news+=arr[i];
    }
    return news;
}
let n=prompt("Enter no.of elements in string array?");
let sarr=[];
for(i=0;i<n;i++){
    let str=prompt("Enter element ::");
    sarr[i]=str;
}
let res=cstr(sarr);
console.log("The Result Is : ",res);