﻿#pragma once

#if !defined TO_STRING && !defined __TO_STRING
# define __TO_STRING(value)  # value
# define TO_STRING(value)    __TO_STRING(value)
#endif

#define AR_VERSION_MAJOR     0
#define AR_VERSION_MINOR     3
#define AR_VERSION_BUILD     1

#define AR_VERSION_STRING    TO_STRING(AR_VERSION_MAJOR) "." TO_STRING(AR_VERSION_MINOR) "." TO_STRING(AR_VERSION_BUILD)
#define AR_VERSION_RSRC_NUM  AR_VERSION_MAJOR, AR_VERSION_MINOR, AR_VERSION_BUILD, 0
#define AR_VERSION_RSRC_STR  AR_VERSION_STRING ".0"

#if defined OS_WIN7
# define AR_PLATFORM_OS_STR  "Win7"
#elif defined OS_WIN10
# define AR_PLATFORM_OS_STR  "Win10"
#endif

#define AR_OWNER_REPO        "SpriteOvO/Telegram-Anti-Revoke"
#define AR_REPO_URL          "https://github.com/" AR_OWNER_REPO
#define AR_REPO_URL_SHORT    "github.com/" AR_OWNER_REPO
#define AR_ISSUES_URL        AR_REPO_URL "/issues"
#define AR_LATEST_REQUEST    "/repos/" AR_OWNER_REPO "/releases/latest"
#define AR_COPYRIGHT         "Copyright (C) 2019-2021 SpriteOvO. All rights reserved."
