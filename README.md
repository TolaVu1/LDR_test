# Dự Án Đo Cường Độ Ánh Sáng(LDR)

## Giới thiệu
Dự án này sử dụng cảm biến quang trở (LDR) để đo cường độ ánh sáng và gửi dữ liệu qua cổng UART bằng ESP32 DOIT Dev-Kit V1. Dữ liệu được hiển thị theo thời gian thực thông qua ứng dụng Teleplot, giúp người dùng dễ dàng theo dõi cường độ ánh sáng trong môi trường theo thời gian thực.

## Tính Năng
- Đo cường độ ánh sáng bằng cảm biến LDR.
- Gửi dữ liệu qua cổng UART.
- Hiển thị dữ liệu theo thời gian thực bằng Teleplot.
- Đơn giản và dễ sử dụng.

## Phần Cứng
- ESP32 DOIT Dev-Kit V1
- Cảm biến quang trở (LDR)
- Điện trở (1kΩ)
- Dây nối
- Nguồn điện (USB hoặc pin)

## Sơ Đồ Kết Nối
- Kết nối một chân LDR với nguồn 3.3V.
- Chân còn lại nốt tiếp với điện trở và nối đất.
- Nối điểm giữa LDR và điện trở với IO34(hoặc thay đổi cho phù hợp với bạn).

## Ảnh teleplot


