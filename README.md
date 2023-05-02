# Guess-the-word

C言語で作った英単語を予想して当てるゲームです。

This is the game of guessing English words in terminal with C language.

## 遊び方

***

1.ランダムで解答(英単語)が決められます。また、ヒントとしてその英単語の文字数が教えられます。

```
/////単語当てゲーム/////
(ヒント:4文字)
```

***

2.入力欄が表示されるので、解答の文字数だけアルファベットを入力します。(ただし必ずしも単語である必要はありません。)

```
/////単語当てゲーム/////
(ヒント:4文字)
1回目>>>
```

***

3.入力した文字が正解かどうか判定されます。正解ならクリアとなりゲーム終了。不正解の場合は、入力した文字が解答内に存在する文字ならピンク、解答内に存在して位置も一致した場合は黄色で表示されます。

```
/////単語当てゲーム/////
(ヒント:4文字)
1回目>>>hair
h"a"i'r'
```

***

4.解答できるのは5回までです。判定された文字の色から正解の英単語を推理して当てましょう。

```
/////単語当てゲーム/////
(ヒント:4文字)
1回目>>>hair
h"a"i'r'
2回目>>>race
'r'"a"c"e"
3回目>>>
```

***