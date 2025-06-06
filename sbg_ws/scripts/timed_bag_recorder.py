#!/usr/bin/env python3
import subprocess
import time
import datetime
import os
import signal

topics = [
    '/sbg/imu_data',
    '/sbg/imu_short',
    '/sbg/ekf_quat',
    '/sbg/ekf_nav',
    '/sbg/status'
]

def main():
    record_process = None
    try:
        while True:
            timestamp = datetime.datetime.now().strftime('%Y_%m_%d-%H_%M_%S')
            bag_name = os.path.expanduser(f"~/ros2_bags/sbg_bags/sbg_bag_{timestamp}")
            print(f"[INFO] Starting new bag: {bag_name}")

            record_process = subprocess.Popen(
                ['ros2', 'bag', 'record', '--output', bag_name] + topics,
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL
            )

            time.sleep(600)  # 10 minutes

            print(f"[INFO] Stopping bag: {bag_name}")
            record_process.send_signal(signal.SIGINT)
            record_process.wait()
            record_process = None

    except KeyboardInterrupt:
        if record_process:
            record_process.send_signal(signal.SIGINT)
            record_process.wait()

if __name__ == '__main__':
    main()
