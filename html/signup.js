function func(){
var a = document.getElementById('mobile');
var b = document.getElementById('email');
var form = document.getElementById('form');
if (/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(b.value)) 
{ 
alert('Message Sent Successfully !');
form.action = "";
return true;
}
else

{
	alert('Email address is not valid');
	return false;
}

}