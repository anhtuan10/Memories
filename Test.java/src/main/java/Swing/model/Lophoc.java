/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Swing.model;

/**
 *
 * @author hantu
 */
import java.util.Date;
public class Lophoc {
    private int ma_lop_hoc;
    private Khoahoc Khoahoc;
    private HocVien Hocvien;
    private Date ngay_dang_ky;
    private boolean tinh_trang;

    public int getMa_lop_hoc() {
        return ma_lop_hoc;
    }

    public void setMa_lop_hoc(int ma_lop_hoc) {
        this.ma_lop_hoc = ma_lop_hoc;
    }

    public Khoahoc getKhoahoc() {
        return Khoahoc;
    }

    public void setKhoahoc(Khoahoc Khoahoc) {
        this.Khoahoc = Khoahoc;
    }

    public HocVien getHocvien() {
        return Hocvien;
    }

    public void setHocvien(HocVien Hocvien) {
        this.Hocvien = Hocvien;
    }

    public Date getNgay_dang_ky() {
        return ngay_dang_ky;
    }

    public void setNgay_dang_ky(Date ngay_dang_ky) {
        this.ngay_dang_ky = ngay_dang_ky;
    }

    public boolean isTinh_trang() {
        return tinh_trang;
    }

    public void setTinh_trang(boolean tinh_trang) {
        this.tinh_trang = tinh_trang;
    }
    
    
}
