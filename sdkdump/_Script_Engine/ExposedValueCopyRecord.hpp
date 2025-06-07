#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Property;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ExposedValueCopyRecord {
    private: char pad_0[0x68]; public:
    _Script_CoreUObject::Property*& get_SourceProperty();
    void* get_SourcePropertyName();
    void* get_SourceSubPropertyName();
    int32_t& get_SourceArrayIndex();
    _Script_CoreUObject::Property*& get_DestProperty();
    int32_t& get_DestArrayIndex();
    int32_t& get_Size();
    bool get_bInstanceIsTarget();
    void set_bInstanceIsTarget(bool value);
    void* get_PostCopyOperation();
    void* get_CopyType();
    _Script_CoreUObject::Property*& get_CachedSourceProperty();
    _Script_CoreUObject::Property*& get_CachedSourceStructSubProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
