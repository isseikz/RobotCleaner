# RobotCleaner

メカナムホイール移動ロボットによる、掃き寄せ清掃の実験機。
ToF による段差検知と、micro-ROS による ROS 2 連携を扱う。

## 開発環境

ターゲットは M5StickC Plus2（ESP32-PICO-V3-02, Flash 8MB / PSRAM 2MB）。
[PlatformIO](https://platformio.org/) + Arduino framework + [M5Unified](https://github.com/m5stack/M5Unified) で構築する。

### セットアップ

```sh
# PlatformIO Core のインストール（VS Code 拡張 PlatformIO IDE でも可）
pipx install platformio   # または uv tool install platformio
```

### よく使うコマンド

| 目的 | コマンド |
|---|---|
| ビルド | `pio run -e m5stick-c-plus2` |
| 書き込み | `pio run -e m5stick-c-plus2 -t upload` |
| シリアルモニタ | `pio device monitor -e m5stick-c-plus2` |
| ホスト上のユニットテスト | `pio test -e native` |

StickC Plus2 は PlatformIO 標準のボード定義に含まれないため、[boards/m5stick-c-plus2.json](boards/m5stick-c-plus2.json) を同梱している。

### ディレクトリ構成

```
boards/   カスタムボード定義
src/      ファームウェア本体
test/     ユニットテスト（native 環境で実機なしに実行）
```

## 設計判断

主要な判断は [docs/adr/](docs/adr/) に ADR として記録している。
設計の経緯を追う場合はこちらを参照。
