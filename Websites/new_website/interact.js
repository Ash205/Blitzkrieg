function change(){
	$('#no').html('your');
	$('#no').click(
	function(){$('#no').html('my');$('#no').off("click");}
	);
};
function changeImage(id){
	document.querySelector('#bigimage').src=id;
}