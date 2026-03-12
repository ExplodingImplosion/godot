#include "byte_utils.h"

class Compression: public RefCounted {
GDCLASS(Compression, RefCounted);
public:
const int TIMES_COMPRESSED = 0;
const int BEGIN_UNCOMPRESSED = 1;
const int SIZE_INDICATOR_BEGIN = 1;
const int SIZE_INDICATOR_BYTES = 2;
const int SIZE_INDICATOR_BYTES_BIG = 4;
static bool is_compressed(PackedByteArray bytes);
static int get_num_times_compressed(PackedByteArray bytes);
static int get_begin_offset(PackedByteArray bytes, bool big);
static int get_contents_decompressed_size(int times_compressed, PackedByteArray bytes, bool big);
static PackedByteArray get_contents(PackedByteArray bytes, bool big);
static PackedByteArray get_bytes_decompressed(int times_compressed, PackedByteArray bytes, PackedByteArray contents, int compression_mode, bool big);
static PackedByteArray repeated_compress(PackedByteArray bytes, int compression_mode, bool big);
static void add_compression(PackedByteArray final, int offset, int compressed_size, bool big);
static PackedByteArray repeated_decompress(PackedByteArray bytes, int compression_mode, bool big);
static void _bind_methods();
Compression();~Compression();
};
