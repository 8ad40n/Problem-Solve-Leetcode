// 58. Length of Last Word

var lengthOfLastWord = (s)=>{
    s= s.trim();
    var list= s.split(" ");
    var res= list[list.length-1].length;
    return res;
    
}

let s = "   fly me   to   the moon  ";
console.log(lengthOfLastWord(s));