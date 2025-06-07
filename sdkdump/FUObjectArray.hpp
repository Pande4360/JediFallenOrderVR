#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
struct FUObjectItem;
namespace _Script_CoreUObject {
struct Object;
}
#pragma pack(push, 1)
class FUObjectArray {
public:
    static FUObjectArray* get();
    static bool is_chunked();
    static bool is_inlined();
    static size_t get_objects_offset();
    static size_t get_item_distance();
    int32_t get_object_count();
    FUObjectItem* get_object(int32_t index);
    void* get_objects_ptr();
    _Script_CoreUObject::Object* find_uobject(std::wstring_view name);
}; // Size: 0x0
#pragma pack(pop)
