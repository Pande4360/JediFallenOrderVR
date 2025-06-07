#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AsyncActionLoadPrimaryAssetBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AsyncActionLoadPrimaryAssetClassList : public AsyncActionLoadPrimaryAssetBase {
    private: char pad_78[0x10]; public:
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::AsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(_Script_CoreUObject::Object* WorldContextObject, void*& PrimaryAssetList, void*& LoadBundles);
}; // Size: 0x88
#pragma pack(pop)
}
