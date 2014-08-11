//
//  FMReadOnlyDatabase+Protected.h
//  fmdb
//
//  Created by RODGERS, BRIAN [AG/1000] on 8/11/14.
//
//

#import <Foundation/Foundation.h>
#import "FMReadOnlyDatabase.h"
@interface FMReadOnlyDatabase(Protected)

- (void)bindObject:(id)obj toColumn:(int)idx inStatement:(sqlite3_stmt*)pStmt;
- (void)warnInUse;
- (BOOL)databaseExists;
- (FMStatement*)cachedStatementForQuery:(NSString*)query;
- (NSError*)errorWithMessage:(NSString*)message;
- (void)setCachedStatement:(FMStatement*)statement forQuery:(NSString*)query;
- (void)extractSQL:(NSString *)sql argumentsList:(va_list)args intoString:(NSMutableString *)cleanedSQL arguments:(NSMutableArray *)arguments;
@end
