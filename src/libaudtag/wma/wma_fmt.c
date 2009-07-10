
#include "wma_fmt.h"

const ObjectType object_types_map[ASF_OBJECT_LAST] = {
    { ASF_HEADER_OBJECT, ASF_HEADER_OBJECT_GUID},
    { ASF_FILE_PROPERTIES_OBJECT, ASF_FILE_PROPERTIES_OBJECT_GUID},
    { ASF_STREAM_PROPERTIES_OBJECT, ASF_STREAM_PROPERTIES_OBJECT_GUID},
    { ASF_HEADER_EXTENSION_OBJECT, ASF_HEADER_EXTENSION_OBJECT_GUID},
    { ASF_CODEC_LIST_OBJECT, ASF_CODEC_LIST_OBJECT_GUID},
    { ASF_SCRIPT_COMMAND_OBJECT, ASF_SCRIPT_COMMAND_OBJECT_GUID},
    { ASF_MARKER_OBJECT, ASF_MARKER_OBJECT_GUID},
    { ASF_BITRATE_MUTUAL_EXCLUSION_OBJECT, ASF_BITRATE_MUTUAL_EXCLUSION_OBJECT_GUID},
    { ASF_ERROR_CORRECTION_OBJECT, ASF_ERROR_CORRECTION_OBJECT_GUID},
    { ASF_CONTENT_DESCRIPTION_OBJECT, ASF_CONTENT_DESCRIPTION_OBJECT_GUID},
    { ASF_EXTENDED_CONTENT_DESCRIPTION_OBJECT, ASF_EXTENDED_CONTENT_DESCRIPTION_OBJECT_GUID},
    { ASF_CONTENT_BRANDING_OBJECT, ASF_CONTENT_BRANDING_OBJECT_GUID},
    { ASF_STREAM_BITRATE_PROPERTIES_OBJECT, ASF_STREAM_BITRATE_PROPERTIES_OBJECT_GUID},
    { ASF_CONTENT_ENCRYPTION_OBJECT, ASF_CONTENT_ENCRYPTION_OBJECT_GUID},
    { ASF_EXTENDED_CONTENT_ENCRYPTION_OBJECT, ASF_EXTENDED_CONTENT_ENCRYPTION_OBJECT_GUID},
    { ASF_DIGITAL_SIGNATURE_OBJECT, ASF_DIGITAL_SIGNATURE_OBJECT_GUID},
    { ASF_PADDING_OBJECT, ASF_PADDING_OBJECT_GUID}
};

