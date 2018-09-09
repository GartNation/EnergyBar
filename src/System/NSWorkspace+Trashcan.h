/**
 * @file NSWorkspace+Trashcan.h
 *
 * @copyright 2018 Bill Zissimopoulos
 */
/*
 * This file is part of EnergyBar.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 3 as published by the Free Software
 * Foundation.
 */

#import <Cocoa/Cocoa.h>

@interface NSWorkspace (Trashcan)
- (NSString *)trashcanPath;
- (BOOL)openTrashcan;
- (BOOL)emptyTrashcan;
- (BOOL)moveToTrashcan:(NSArray<NSURL *> *)urls;
- (BOOL)isTrashcanFull;
- (void)addTrashcanObserver:(id)observer selector:(SEL)sel;
- (void)removeTrashcanObserver:(id)observer;
@end
