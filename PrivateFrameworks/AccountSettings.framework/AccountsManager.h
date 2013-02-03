/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSMutableArray, NSMutableDictionary;

@interface AccountsManager : NSObject {
    NSMutableArray *_accounts;
    NSMutableDictionary *_accountsByID;
    NSUInteger _dataVersion;
}

+ (void)_migrateAccountsIfNeeded;
+ (BOOL)_oldDAAccountsInformationFound;
+ (BOOL)_oldMailAccountsInformationFound;
+ (BOOL)accountSettingsNeedsToBeMigrated;
+ (void)beginMigration;
+ (NSUInteger)currentVersion;
+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (void)endMigration;
+ (BOOL)getMigrationLock;
+ (void)releaseMigrationLock;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (void)shouldMigrateOldMailAccounts:(BOOL*)arg1 oldDAAccounts:(BOOL*)arg2 newAccountSettings:(BOOL*)arg3;

- (id)_initInsideOfMigration;
- (id)_initWithAccountsInfo:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountWithSyncIdentifier:(id)arg1;
- (id)accountsWithTypes:(id)arg1;
- (id)allBasicAccounts;
- (id)allExchangeAccounts;
- (id)allMailAccounts;
- (NSUInteger)count;
- (NSUInteger)countOfBasicAccountsWithTypes:(id)arg1;
- (NSUInteger)dataVersion;
- (void)dealloc;
- (void)deleteAccount:(id)arg1;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (id)displayNameForAccountWithIdentifier:(id)arg1;
- (id)displayNameForAccountWithSyncIdentifier:(id)arg1;
- (id)fullAccountWithIdentifier:(id)arg1;
- (id)fullDeviceLocalAccount;
- (id)init;
- (id)initWithAccounsInfoArray:(id)arg1;
- (void)insertAccount:(id)arg1;
- (id)legacyAccounts;
- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;
- (void)replaceExchangeAccountsWith:(id)arg1;
- (void)saveAllAccounts;
- (void)setDataVersion:(NSUInteger)arg1;
- (void)setLegacyAccounts:(id)arg1;
- (void)updateAccount:(id)arg1;

@end