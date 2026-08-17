/**
 * @file
 * example.stateless.vuoize node implementation.
 *
 * @copyright Copyright © 2012–2022 Kosada Incorporated.
 * This code may be modified and distributed under the terms of the MIT License.
 * For more information, see https://vuo.org/license.
 */

#include "node.h"
//#include "VuoText.h"

VuoModuleMetadata({
					 "title" : "Trim Text",
					 "description" : "Takes a text string and trim it (rmoving spaces at begin and at end).",
					 "keywords" : [ ],
					 "version" : "1.0.0",
					 "dependencies" : [ ],
				 });

void nodeEvent
(
		VuoInputData(VuoText) text,
		VuoOutputData(VuoText) trimmedtext
)
{
	*trimmedtext = VuoText_trim(text);
}
