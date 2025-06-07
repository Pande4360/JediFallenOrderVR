#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimaryDataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PrimaryAssetLabel : public PrimaryDataAsset {
    private: char pad_30[0x40]; public:
    void* get_Rules();
    bool get_bLabelAssetsInMyDirectory();
    void set_bLabelAssetsInMyDirectory(bool value);
    bool get_bIsRuntimeLabel();
    void set_bIsRuntimeLabel(bool value);
    void* get_ExplicitAssets();
    void* get_ExplicitBlueprints();
    void* get_AssetCollection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
