import os
import shutil
import subprocess

# 文件路径定义
source_path = r"E:\Project_Unreal\TestRTF2Stage\WindowsNoEditor\RTypeFinal2\Content\Paks\pakchunk25-WindowsNoEditor.pak"
temp_path = r"E:\Project_Unreal\TestRTF2Stage\WindowsNoEditor\RTypeFinal2\Content\Paks\GradiusStage2.pak"
dest_path = r"D:\Program Files (x86)\Steam\steamapps\common\R-Type Final 2\RTypeFinal2\Content\Paks\LogicMods\GradiusStage2.pak"
exe_path = r"D:\Program Files (x86)\Steam\steamapps\common\R-Type Final 2\RTypeFinal2.exe"

def log(message):
    """打印调试信息"""
    print(f"[DEBUG] {message}")

try:
    # 1. 重命名文件
    log(f"检查是否存在临时文件: {temp_path}")
    if os.path.exists(temp_path):
        log(f"删除已存在的临时文件: {temp_path}")
        os.remove(temp_path)

    log(f"重命名文件 {source_path} -> {temp_path}")
    shutil.move(source_path, temp_path)
    log("重命名完成")

    # 2. 复制文件
    log(f"检查是否存在目标文件: {dest_path}")
    if os.path.exists(dest_path):
        log(f"删除已存在的目标文件: {dest_path}")
        os.remove(dest_path)

    log(f"复制文件 {temp_path} -> {dest_path}")
    shutil.copy(temp_path, dest_path)
    log("文件复制完成")

    # 3. 运行程序
    log(f"尝试运行程序: {exe_path}")
    subprocess.run([exe_path], check=True)
    log("程序运行完成")

except FileNotFoundError as e:
    log(f"文件未找到错误: {e}")
except PermissionError as e:
    log(f"权限错误: {e}")
except subprocess.CalledProcessError as e:
    log(f"程序运行错误，退出代码: {e.returncode}")
except Exception as e:
    log(f"发生未知错误: {e}")