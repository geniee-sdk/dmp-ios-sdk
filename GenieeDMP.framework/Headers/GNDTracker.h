//
//  GNDTracker.h
//  GenieeDMP
//
//  Copyright (c) 2015年 Geniee Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GNDDefines.h"

@interface GNDTracker : NSObject

/**
 *  使用しない。
 *
 *  @return 使用しない。
 */
- (instancetype)init __attribute__((unavailable("init is not available")));

/**
 *  初期化する。
 *
 *  @param trackingId トラッキングID
 */
+ (void)initialize:(NSString *)trackingId;

/**
 *  イベント情報を送信する。
 *
 *  @param eventName イベント名
 */
+ (void)pushEvent:(NSString *)eventName;

/**
 *  イベント情報を送信する。
 *
 *  @param eventName  イベント名
 *  @param attributes 任意の属性データ
 */
+ (void)pushEvent:(NSString *)eventName attributes:(NSDictionary *)attributes;

/**
 *  購入情報を送信する。
 *
 *  @param productId 購入アイテムID
 *  @param price     購入価格
 *  @param currency  通貨
 */
+ (void)pushPurchase:(NSString *)productId price:(float)price currency:(NSString *)currency;

/**
 *  アプリのURLスキームを設定する。
 *
 *  @param appUrl コンバージョン計測からアプリにリダイレクトするためのアプリのURL (URLスキーム://パラメータ)
 */
+ (void)setAppUrl:(NSString *)appUrl;

/**
 *  購入情報を自動的に送信するか設定する。
 *
 *  @param flg 自動送信フラグ
 */
+ (void)setAutoSubmitForPayment:(BOOL)flg;

/**
 *  購入情報の自動送信フラグを返す。
 *
 *  @return 自動送信フラグ
 */
+ (BOOL)isAutoSubmitForPayment;

/**
 *  ログ出力レベルを設定する。
 *
 *  @param logLevel ログ出力レベル
 */
+ (void)setLogLevel:(GNDLogLevel)logLevel;

/**
 *  ログ出力レベルを返す。
 *
 *  @return ログ出力レベル
 */
+ (GNDLogLevel)isLogLevel;

/**
 *  URLスキームによるアプリ呼び出しを処理する。
 *
 *  @param url               URL
 *  @param sourceApplication 呼び出し元アプリケーション
 *  @param annotation        説明
 */
+ (void)handleUrlScheme:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@end
