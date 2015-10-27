//
//  GNDDefines.h
//  GenieeDMP
//
//  Copyright (c) 2015年 Geniee Inc. All rights reserved.
//

#ifndef GenieeTracker_GNDDefines_h
#define GenieeTracker_GNDDefines_h

/**
 ログ出力レベル。
 */
typedef enum {
    /**
     *  ログ出力をしない。
     */
    GNDLogLevelNone    = 0,
    /**
     *  エラー発生時用のログ出力をする。
     */
    GNDLogLevelError   = 1,
    /**
     *  詳細なログ出力をする。
     */
    GNDLogLevelVerbose = 2,
} GNDLogLevel;

#endif
