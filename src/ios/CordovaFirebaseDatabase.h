
#import <Cordova/CDV.h>
@import Firebase;

#ifndef CordovaFirebaseDatabase_h
#define CordovaFirebaseDatabase_h

@interface CordovaFirebaseDatabase : CDVPlugin

@property (nonatomic) NSMutableDictionary *geoFireMap;
@property (strong, nonatomic) FIRDatabaseReference *firebaseRef;
@property (atomic) dispatch_semaphore_t semaphore;


- (void)newInstance:(CDVInvokedUrlCommand*)command;
@end

#endif
