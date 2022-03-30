$('.page').css('display', "none");

$(".after").click(function(event){
  //event.preventDefault();
  var parent = $(this).parent();
  var all = $('.all>div');
  var index = all.index(parent);
  parent.css("display", 'none');
  all.eq(index+1).css("display", 'block');
})

$(".before").click(function(event){
  //event.preventDefault();
  var parent = $(this).parent();
  var all = $('.all>div');
  var index = all.index(parent);
  parent.css("display", 'none');
  all.eq(index-1).css("display", 'block');
})
