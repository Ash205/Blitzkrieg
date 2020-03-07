//Slide 2
alert();
confirm();
prompt();

/*Slide 3
<script type=“text/javascript”>
alert(‘Hello World’);
</script>

<script type=“text/javascript” src="basics.js"></script>
*/

//Slide 4
console.log('Hello World');


//Slide 5
var a = 10;
a = 'h';
console.log(a);

//Slide 6
var a, b, c;     
a = 10; b=20;
c = a + b;
console.log(c);

'2'+'2';2 + '2';

//Slide 7
var a = 5;
var b = 10;
a>b;
2=='2';
2==='2';

//Slide 8
var a = 5;
var b = 10;
if(a>b){
    console.log('a is greater than b');
}
else if(b>a){
    console.log('b is greater than a');
}
else{
    console.log('a is equal to b');
}

//Slide 9
for(var i=1; i<10; i=i+1){
    console.log(i);
}

//Slide 10
function myfunction(){
    alert('the function is called');
}

myfunction();

//Slide 11
onclick="console.log('You clicked the button');"
onclick="alert('You clicked the button');"
onclick="myfunction();"

//Slide 13
function myfunction(){
    var a = document.querySelector('#get').value;
    document.querySelector('#put').innerText = "Hello " + a;
}
