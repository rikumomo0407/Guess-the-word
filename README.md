# Guess-the-word

C言語で作った英単語を予想して当てるゲームです。

This is the game of guessing English words in terminal with C language.

## 遊び方

***

1.ランダムで解答(英単語)が決められます。また、ヒントとしてその英単語の文字数が教えられます。

main.c
<a href="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/F84D4B42-658F-4B74-8137-F684903B1FB3.jpeg">
  <img width="100%" src="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/F84D4B42-658F-4B74-8137-F684903B1FB3.jpeg" />
</a>

***

2.入力欄が表示されるので、解答の文字数だけアルファベットを入力します。(ただし必ずしも単語である必要はありません。)

<a href="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/CAF4FD73-2D6E-496A-BBAA-4BE85FD3FCA3.jpeg">
  <img width="100%" src="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/CAF4FD73-2D6E-496A-BBAA-4BE85FD3FCA3.jpeg" />
</a>

***

3.入力した文字が正解かどうか判定されます。正解ならクリアとなりゲーム終了。不正解の場合は、入力した文字が解答内に存在する文字ならピンク、解答内に存在して位置も一致した場合は黄色、解答内に存在しない文字なら白で表示されます。

main.c
<a href="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/0BED1822-739F-4AE9-A818-51246554B5CE.jpeg">
  <img width="100%" src="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/0BED1822-739F-4AE9-A818-51246554B5CE.jpeg" />
</a>

***

4.解答できるのは5回までです。判定された文字の色から正解の英単語を導きましょう。

main.c
<a href="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/0EB88E9E-CA93-4218-8CDD-44464CD2F8FB.jpeg">
  <img width="100%" src="https://github.com/rikumomo0407/Guess-the-word//raw/main/Images/0EB88E9E-CA93-4218-8CDD-44464CD2F8FB.jpeg" />
</a>

***
