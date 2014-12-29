//
//  NSURL+VVJSONReferencing.h
//  VVJSONSchemaValidation
//
//  Created by Vlas Voloshin on 29/12/2014.
//  Copyright (c) 2014 Vlas Voloshin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (VVJSONReferencing)

/** Returns YES, if receiver contains non-nil host and fragment. */
- (BOOL)vv_isNormalized;
/** Returns a copy of the receiver that contains non-nil host and fragment. */
- (instancetype)vv_normalizedURI;

/** Appends the specified component to the fragment path of receiver. */
- (instancetype)vv_URIByAppendingFragmentComponent:(NSString *)fragmentComponent;

@end