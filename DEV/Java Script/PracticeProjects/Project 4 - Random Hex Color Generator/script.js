const hex = document.querySelector(".hex")
const gen = document.querySelector(".generate")

gen.addEventListener("click", () => {
    const color = Math.random().toString(16).substring(2,8); 
    document.body.style.backgroundColor = "#" + color;
    hex.innerHTML = "#" + color; 
});

// const col = Math.random().toString(16).substring(2,8);
// console.log(col)