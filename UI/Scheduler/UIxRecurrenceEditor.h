/* UIxRecurrenceEditor.h - this file is part of SOGo
 *
 * Copyright (C) 2008 Inverse groupe conseil
 *
 * Author: Ludovic Marcotte <ludovic@inverse.ca>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef UIXRECURRENCEEDITOR_H
#define UIXRECURRENCEEDITOR_H

#import <SOGoUI/UIxComponent.h>

@interface UIxRecurrenceEditor : UIxComponent
{
  NSString *item, *repeat;
}

- (NSArray *) dailyRadioList;

- (NSArray *) weeklyCheckBoxList;

- (NSArray *) dayMonthList;
- (NSArray *) monthlyRepeatList;
- (NSArray *) monthlyDayList;
- (NSArray *) monthlyRadioList;

- (NSArray *) yearlyMonthList;
- (NSArray *) yearlyDayList;

- (NSArray *) rangeRadioList;
- (NSArray *) repeatList;
- (NSArray *) yearlyRadioList;

- (void) setItem: (NSString *) theItem;
- (NSString *) item;

@end

#endif /* UIXRECURRENCEEDITOR_H */
