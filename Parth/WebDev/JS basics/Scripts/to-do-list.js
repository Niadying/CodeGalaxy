const arr = [];

function rendertodolist(){
  let todolistHTML ='';

  for(let i=0;i<arr.length;i++){
    const todo = arr[i];
    const html =`<p>${todo} <button onclick="
                arr.splice(${i},1);
                rendertodolist(); 
              ">Delete</button> </p>`;

    todolistHTML+=html;
  }

  document.querySelector('.js-todolist').innerHTML=todolistHTML;
}

function addtodo(){
  const inputelement =  document.querySelector('.js-name-input');
  const name = inputelement.value;
  arr.push(name);
  console.log(arr);

  inputelement.value='';

  rendertodolist();
}