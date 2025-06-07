#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\PrimaryAssetId.hpp"
#include "AsyncActionLoadPrimaryAssetBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AsyncActionLoadPrimaryAssetClass : public AsyncActionLoadPrimaryAssetBase {
    private: char pad_78[0x10]; public:
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::AsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::PrimaryAssetId PrimaryAsset, void*& LoadBundles);
}; // Size: 0x88
#pragma pack(pop)
}
