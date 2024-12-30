General Guide

https://docs.zephyrproject.org/latest/develop/getting_started/index.html

Specific Guide - Nucleo F070RB

https://docs.zephyrproject.org/latest/boards/st/nucleo_f070rb/doc/index.html

Additional installations required

https://www.st.com/en/development-tools/stm32cubeprog.html?dl=Y63T3jrnqAKWi2TLzhlSWA%3D%3D%2CX0k%2FXUxFilU4DtPOk1aPez0S3kMwlrMkdJ1MF1W07Ib9jG1OItW4In%2BokPPsbPHsHiYYUnRGRZpB0hoox%2BEnfbAMYdEMKL7l1HV49GLVbjo440WWwDvV%2B2NVch%2B0Zhya9dyszPGmPTcrTL1ZJIzoCUsxGrvXvbIAdiYEXo6y1RzvE7NrHL3MqdJLmFjkxqOOF%2Fo8YD7GW50zKMVu3GOJCkRKEqCDmphXPWgz%2FEUXLNqcqKUsWqL9y2kWlrUF2%2BGIJacpgVWBD6DIU4oKlQAHnIEshymkU2XmpE65YPc71DKWGHTn%2BNHiVcyyx9F9ZRZP%2FjX8DCzVNNByiMKe2dbIEBZSiRnjFUbjhw9wim2RoGg%3D&mkt_tok=ODU2LVBWUC03MTUAAAGXuGrY32--CPqmFLYS6m7VjIzKWk2ydrbAr1iu4Ano0Q3ztEV1qc6eer02_YGWturV-U1Spq9JhYtLkti_2tZC7e2MKePmTNRHqvv0waTzTg


Commands

```
west build -b nucleo_f070rb ~/dev/learning/RT/learning-zephyr/hello-world -p always
west flash
west rtt
```
