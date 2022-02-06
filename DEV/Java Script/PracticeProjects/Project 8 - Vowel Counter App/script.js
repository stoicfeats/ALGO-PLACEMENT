const btn = document.querySelector(".btn");
const result = document.querySelector(".result");

btn.addEventListener("click", vowel);


function vowel() {
  const word = document.querySelector(".input-text").value;
  const len = word.length;
  let count = 0;
  for(let i=0;i<len;i++){
    if(word[i].match(/([a,e,i,o,u,A,E,I,O,U])/) ){
        count++;
    }
  }
result.innerHTML = `Total Vowels in this word : ${count}`;
}
