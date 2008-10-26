//
//  Connection.h
//  TwitterFon
//
//  Created by kaz on 7/25/08.
//  Copyright 2008 naan studio. All rights reserved.
//

@interface TFConnection : NSObject
{
	NSObject*           delegate;
	NSURLConnection*    connection;
    NSHTTPURLResponse*  response;
	NSMutableData*      buf;
    int                 statusCode;
}

@property (nonatomic, readonly) NSMutableData* buf;
@property (nonatomic, assign) int statusCode;

- (id)initWithDelegate:(NSObject*)delegate;
- (void)get:(NSString*)URL;
- (void)post:(NSString*)aURL body:(NSString*)body;
- (void)cancel;

- (void)alertError:(NSString*)title withMessage:(NSString*)msg;
- (void)TFConnectionDidFailWithError:(NSError*)error;
- (void)TFConnectionDidFinishLoading:(NSString*)content;

@end
