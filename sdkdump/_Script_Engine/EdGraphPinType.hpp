#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EdGraphPinType {
    private: char pad_0[0x60]; public:
    void* get_PinCategory();
    void* get_PinSubCategory();
    void* get_PinSubCategoryObject();
    void* get_PinSubCategoryMemberReference();
    void* get_PinValueType();
    void* get_ContainerType();
    bool get_bIsArray();
    void set_bIsArray(bool value);
    bool get_bIsReference();
    void set_bIsReference(bool value);
    bool get_bIsConst();
    void set_bIsConst(bool value);
    bool get_bIsWeakPointer();
    void set_bIsWeakPointer(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
