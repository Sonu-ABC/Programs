const max=prompt("enter the max number");
const random=Math.floor(Math.random()*max)+1;
let guess=prompt("guess the number");
while(true){
    if(guess == "quit"){
        console.log("user quit");
        break;
    }
    else if(guess == random){
        console.log("you are right! Congrats!!");
        break;
    }
    else{
    prompt("guess the number");
    }
}