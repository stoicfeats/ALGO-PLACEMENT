const gen = document.querySelector(".generate");
const number = document.querySelector(".number");

gen.addEventListener("click", ()=>{
    const rang = Math.random().toString(16).substring(2,8);
    const num = Math.floor(Math.random() * 10 ) ; 
    number.innerHTML = num;
    document.body.style.backgroundColor = '#' + rang;
})