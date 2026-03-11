#include "compression.h"
Compression::Compression(){
	
}
Compression::~Compression(){
	
}
bool Compression::is_compressed(PackedByteArray bytes) {
	
}
int Compression::get_num_times_compressed(PackedByteArray bytes) {
	
}
int Compression::get_begin_offset(PackedByteArray bytes, bool big) {
	
}
int Compression::get_contents_decompressed_size(int times_compressed, PackedByteArray bytes, bool big) {
	
}
PackedByteArray Compression::get_contents(PackedByteArray bytes, bool big) {
	
}
PackedByteArray Compression::get_bytes_decompressed(int times_compressed, PackedByteArray bytes, PackedByteArray contents, int compression_mode, bool big) {
	
}
PackedByteArray Compression::repeated_compress(PackedByteArray bytes, int compression_mode, bool big) {
	
}
void Compression::add_compression(PackedByteArray final, int offset, int compressed_size, bool big) {
	
}
PackedByteArray Compression::repeated_decompress(PackedByteArray bytes, int compression_mode, bool big) {
	
}
void Compression::_bind_methods(){
ClassDB::bind_static_method("Compression", D_METHOD("is_compressed", "bytes"), &Compression::is_compressed);
ClassDB::bind_static_method("Compression", D_METHOD("get_num_times_compressed", "bytes"), &Compression::get_num_times_compressed);
ClassDB::bind_static_method("Compression", D_METHOD("get_begin_offset", "bytes", "big"), &Compression::get_begin_offset, DEFVAL(false));
ClassDB::bind_static_method("Compression", D_METHOD("get_contents_decompressed_size", "times_compressed", "bytes", "big"), &Compression::get_contents_decompressed_size, DEFVAL(false));
ClassDB::bind_static_method("Compression", D_METHOD("get_contents", "bytes", "big"), &Compression::get_contents, DEFVAL(false));
ClassDB::bind_static_method("Compression", D_METHOD("get_bytes_decompressed", "times_compressed", "bytes", "contents", "compression_mode", "big"), &Compression::get_bytes_decompressed, DEFVAL(0), DEFVAL(false));
ClassDB::bind_static_method("Compression", D_METHOD("repeated_compress", "bytes", "compression_mode", "big"), &Compression::repeated_compress, DEFVAL(0), DEFVAL(false));
ClassDB::bind_static_method("Compression", D_METHOD("add_compression", "final", "offset", "compressed_size", "big"), &Compression::add_compression, DEFVAL(false));
ClassDB::bind_static_method("Compression", D_METHOD("repeated_decompress", "bytes", "compression_mode", "big"), &Compression::repeated_decompress, DEFVAL(0), DEFVAL(false));
}