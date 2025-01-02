# RK ROYAL KLUDGE R75 - 🚧 Custom QMK firmware

I bought the R65 keyboard and loved it, but found I needed more keys sometimes.

I found the R75 on amazon:
[RK ROYAL KLUDGE R75](https://www.amazon.com/dp/B0CNP1BG1W?th=1)

Since I had customized the [R65](https://github.com/iamdanielv/kb_rk_r65/) a bit, I wanted to do the same for the R75.

## Custom Keyboard Software

I reached out to sdk66, who had provided some help with the R65. They provided a great starting point but unfortunately I ran into some issues:

- Code didn't include how to set the CapsLock / Windows or Mac LEDs
- The mapping for the RGB Matrix was in a different order so I had to remap it
- SPI pins were not provided

I asked for a copy of the PCB and they provided, which was super helpful! You can find the PCB in the extras folder.

I created a new folder called `iamdanielv` that could be put into the qmk repo `keyboard` directory and not mess anything up when/if the original source is added later.

Copy the folder structure from `rk\r75\` into the qmk repo `keyboard` directory.

## ⚠️ Disclaimer
> [!CAUTION]
> This is a custom firmware that could break your keyboard.
>
> 🛑 **Use at your own risk!** 🛑
> 
> I have tried my best to make sure everything works, but I may miss something.
>
> It works for my keyboard, but there may be revisions in the future that are not compatible. Use at your own risk!

## 🥳Thanks!

Thanks to [sdk66](https://github.com/sdk66/) for providing a lot of samples and guidance.
The [Tide65 code base](https://github.com/sdk66/qmk_firmware/tree/wireless/keyboards/epomaker/tide65) was very helpful in getting a lot of things figured out.

## ⌨️ New Keymap

I've updated the **default** keymap to work with the current source. It can be used as a starting point for customization.

I created a **new keymap** `iamdanielv` that enables via, function keys, navigation, a num pad and layer for RGB / Keyboard management.

I use `6 layers` for my changes, `keyboard.json` specifies that in the following section:

```json
"dynamic_keymap": {
    "layer_count": 6
}
```

## 🖥️ Compiling

You can now use QMK builder with the following command:

```shell
qmk compile -j 0 -kb rk/r75/ansi -km iamdanielv
```

> the `-j 0` uses parallel build to speed it up a bit

qmk should generate a new bin file: `rk_r75_ansi_iamdanielv.bin` in your qmk_firmware folder.

For me it was: `C:\Users\<USER>\qmk_firmware\rk_r75_ansi_iamdanielv.bin`

I've included a version of [my custom firmware](extras/rk_r75_ansi_iamdanielv.bin) that works well for me. There you will also find the [original firmware](extras/RK_R75_Wired_Version-20240928T211918Z-001.zip) in case something goes horribly wrong. I got that zip from their official website, but when you load that firmware it labels the R75 as the PRO version in VIA, the firmware works, but you have to load the JSON file from that zip.

The VIA json file I provided in the extras folder, [VIA JSON](extras/R75_Wired_Windows_QMK.json) works with the firmware generated with this repo.


- [Original](extras/RK_R75_Wired_Version-20240928T211918Z-001.zip)
- [Custom](extras/rk_r75_ansi_iamdanielv.bin)

## 🌐 Using via

In order to use via, you may have to upload the [json specification](extras/R75_Wired_Windows_QMK.json), it can be found under the `extras` folder.

## 🥾 Bootloader and Clearing eeprom

To prevent accidental KB Bootloader triggers, I have it hidden under a layer.

- To reboot and `enter bootloader mode`:
  - hold `Fn`, then hold `RShift`, then triple tap the `q` key
  - OR hold `RAlt`, then hold `RShift`, then triple tap the `q` key
  - OR hold `CAPS Lock`, then hold `RShift`, then triple tap the `q` key
  - OR hold `RAlt`, then double tap `PgDn`, then triple tap the `q` key
- To `clear eeprom`:
  - hold `Fn`, then hold `RShift`, then triple tap the `z` key
  - OR hold `RAlt`, then hold `RShift`, then triple tap the `z` key
  - OR hold `CAPS Lock`, then hold `RShift`, then triple tap the `z` key
  - OR hold `Ralt`, then double tap `PgDn`, then triple tap the `q` key

## ⭐ Features

I use a `control layer` to modify the keyboard settings.

To enable the control layer
- Momentary - will be deactivated as soon as you release `Right Shift`:
    - hold `Fn`, then hold `RShift`
    - OR hold `RAlt`, then hold `RShift`
    - OR hold `CAPS Lock`, then hold `RShift`
- Toggle:
    - hold `Ralt`, then double tap `PgDn`

While on the Control Layer, you have the following available:

- `Q` - triple tap to `enter bootloader mode`
- `Z` - triple tap to `clear eeprom`

- `LCTL` - Swap Number row for Fn Keys (1 is F1 ... + is F12)
- `N` - Toggle NKRO
- `I` - Change Background Color HUE Down
- `O` - Change Background Color HUE Up
- `K` - Change Background Color SAT Down
- `L` - Change Background Color SAT Up
- `,` - Change Background Color VAL Down - RGB_VAD
- `.` - Change Background Color VAL Up - RGB_VAI
- `;` - RGB_SPD
- `'` - RGB_SPI
- `P` - RGB Matrix solid color
- `[` - RGB_RMOD
- `]` - RGB_RMD
- `\` - RGB_TOG -- this will turn off the colors, but still enable indicators

- ⬅️ - RGB_SPD
- ➡️ - RGB_SPI
- ⬆️ - RGB_VAI
- ⬇️ - RGB_VAD


## 🎉 Conclusion and Next Steps

**That's it!** You now should be able to flash the custom firmware using qmk toolbox.

Let me know if you have any questions. I can be reached at [@IAmDanielV](https://twitter.com/IAmDanielV) or [@iamdanielv.bsky.social](https://bsky.app/profile/iamdanielv.bsky.social).

