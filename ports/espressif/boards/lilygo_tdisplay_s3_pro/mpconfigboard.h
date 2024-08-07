// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2024 Konstantinos Krikis
//
// SPDX-License-Identifier: MIT

#pragma once

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "LILYGO T-Display S3 Pro"
#define MICROPY_HW_MCU_NAME         "ESP32S3"

#define DEFAULT_SPI_BUS_SCK         (&pin_GPIO18)
#define DEFAULT_SPI_BUS_MOSI        (&pin_GPIO17)
#define DEFAULT_SPI_BUS_MISO        (&pin_GPIO8)

#define DEFAULT_I2C_BUS_SCL         (&pin_GPIO6)
#define DEFAULT_I2C_BUS_SDA         (&pin_GPIO5)
